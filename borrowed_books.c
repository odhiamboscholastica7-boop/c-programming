/*
Name: Scholastica
RegNo:PA106/G/28808
Description:Program to display borrowed books
*/
int main() {
    
    struct Student student;

    // Open the binary file in read mode
    file_pointer = fopen("results.dat", "rb");

    // Check if the file was opened successfully
    if (file_pointer == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Student Examination Results:\n");

    // Read and display each student record
    while (fread(&student, sizeof(struct Student), 1, file_pointer)) {
    	// Prompt the user for the book title
    printf("Enter the title of the book: ");
    fgets(book_title, 100, stdin);
    // Write the book title to the file
    fprintf(file_pointer, "%s", book_title);

    // Close the file
    fclose(file_pointer);

    // Display confirmation message
    printf("Book title successfully stored.\n");

    return 0;
}