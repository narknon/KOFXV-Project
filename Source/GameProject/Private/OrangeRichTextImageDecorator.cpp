#include "OrangeRichTextImageDecorator.h"

UOrangeRichTextImageDecorator::UOrangeRichTextImageDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->ImageSet = NULL;
    this->Margin = 0.00f;
}

