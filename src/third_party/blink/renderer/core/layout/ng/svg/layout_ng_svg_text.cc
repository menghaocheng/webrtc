// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/layout/ng/svg/layout_ng_svg_text.h"

#include "third_party/blink/renderer/core/svg/svg_text_element.h"

namespace blink {

LayoutNGSVGText::LayoutNGSVGText(Element* element)
    : LayoutNGBlockFlowMixin<LayoutSVGBlock>(element) {
  DCHECK(IsA<SVGTextElement>(element));
}

const char* LayoutNGSVGText::GetName() const {
  NOT_DESTROYED();
  return "LayoutNGSVGText";
}

bool LayoutNGSVGText::IsOfType(LayoutObjectType type) const {
  NOT_DESTROYED();
  return type == kLayoutObjectSVG ||
         LayoutNGBlockFlowMixin<LayoutSVGBlock>::IsOfType(type);
}

bool LayoutNGSVGText::CreatesNewFormattingContext() const {
  NOT_DESTROYED();
  return true;
}

void LayoutNGSVGText::UpdateBlockLayout(bool relayout_children) {
  UpdateNGBlockLayout();
}

}  // namespace blink
