//
// Created by doviwid on 12/30/18.
//

#include "MyTestClientHandler.h"

void MyTestClientHandler::handleClient(istream in, ostream out) {
    char buffer[256];
    in.getline(buffer, 256);
    while (buffer != "end") {
        Problem *problem = new Problem(buffer);
        if (this->cm->isSavedSolution(problem)) {
            out << this->cm->getSolution(problem)->getSolution() << endl;
        } else {
            Solution *solution = solver->solve(problem);
            this->cm->saveSolution(problem, solution);
            out << this->cm->getSolution(problem)->getSolution() << endl;
        }
        in.getline(buffer, 256);
    }
}
