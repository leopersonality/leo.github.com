function sendMessage() {
    var userInput = document.getElementById("user-input");
    var chatBox = document.getElementById("chat-box");

    // Get user input
    var message = userInput.value.trim();

    if (message !== "") {
        // Display user message in the chat box
        chatBox.innerHTML += '<div class="message user-message">' + message + '</div>';

        // Clear input field
        userInput.value = "";

        // Scroll to the bottom of the chat box
        chatBox.scrollTop = chatBox.scrollHeight;
    }
}
