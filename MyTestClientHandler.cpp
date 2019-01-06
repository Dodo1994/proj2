//
// Created by doviwid on 12/30/18.
//

#include "MyTestClientHandler.h"
void MyTestClientHandler::handleClient(istream in, ostream out) {
    char buffer[256];
    in.getline(buffer, 256);
    while (buffer != "end") {
        if (this->cm->isSavedSolution(buffer)) {
            out << this->cm->getSolution(buffer)<< flush;
        } else {
            this->cm->saveSolution(buffer, solver->solve(buffer));
            out << this->cm->getSolution(buffer)<< flush;
        }
        in.getline(buffer, 256);
    }
}
// TODO: flush vs endl.
