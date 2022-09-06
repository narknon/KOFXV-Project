#include "SaveQueueNode.h"

FSaveQueueNode::FSaveQueueNode() {
    this->Type = ESaveDataType::SYSTEM;
    this->SaveData = NULL;
}

