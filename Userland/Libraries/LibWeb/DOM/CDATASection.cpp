/*
 * Copyright (c) 2022, Luke Wilde <lukew@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/DOM/CDATASection.h>

namespace Web::DOM {

CDATASection::CDATASection(Document& document, DeprecatedString const& data)
    : Text(document, NodeType::CDATA_SECTION_NODE, data)
{
}

CDATASection::~CDATASection() = default;

JS::ThrowCompletionOr<void> CDATASection::initialize(JS::Realm& realm)
{
    MUST_OR_THROW_OOM(Base::initialize(realm));
    set_prototype(&Bindings::ensure_web_prototype<Bindings::CDATASectionPrototype>(realm, "CDATASection"));

    return {};
}

}
