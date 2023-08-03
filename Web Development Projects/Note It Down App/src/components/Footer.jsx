import React from "react";

function Footer() {
    const currentYear = new Date().getFullYear();
    return (
        <footer>
            <p>
                Copiright © {currentYear}
            </p>
        </footer>
    );
}

export default Footer;