const app = document.getElementById('app');

const stages = ['To Do', 'In Progress', 'Done'];

function createTaskCard(task) {
    const card = document.createElement('div');
    card.className = 'task-card';
    card.textContent = task.title;
    
    card.draggable = true;
    card.addEventListener('dragstart', (e) => {
        e.dataTransfer.setData('text/plain', task.id);
    });
    
    return card;
}

function createStage(stageName, tasks) {
    const stage = document.createElement('div');
    stage.className = 'stage';
    
    const stageTitle = document.createElement('h2');
    stageTitle.textContent = stageName;
    
    stage.appendChild(stageTitle);
    
    const taskList = document.createElement('div');
    taskList.className = 'task-list';
    
    tasks.forEach(task => {
        taskList.appendChild(createTaskCard(task));
    });
    
    stage.appendChild(taskList);
    
    stage.addEventListener('dragover', (e) => {
        e.preventDefault();
    });
    
    stage.addEventListener('drop', (e) => {
        e.preventDefault();
        const taskId = e.dataTransfer.getData('text/plain');
        const taskCard = document.getElementById(taskId);
        taskCard.parentNode.removeChild(taskCard);
        taskList.appendChild(taskCard);
    });
    
    return stage;
}

function renderBoard(tasks) {
    app.innerHTML = '';
    
    stages.forEach(stageName => {
        const stageTasks = tasks.filter(task => task.stage === stageName);
        const stage = createStage(stageName, stageTasks);
        app.appendChild(stage);
    });
}

// Example tasks data
const tasks = [
    { id: 'task1', title: 'Task 1', stage: 'To Do' },
    { id: 'task2', title: 'Task 2', stage: 'In Progress' },
    { id: 'task3', title: 'Task 3', stage: 'Done' },
    // Add more tasks here
];

renderBoard(tasks);
