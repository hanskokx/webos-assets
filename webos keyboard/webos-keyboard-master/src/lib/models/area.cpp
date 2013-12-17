/*
 * This file is part of Maliit Plugins
 *
 * Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
 *
 * Contact: Mohammad Anwari <Mohammad.Anwari@nokia.com>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this list
 * of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list
 * of conditions and the following disclaimer in the documentation and/or other materials
 * provided with the distribution.
 * Neither the name of Nokia Corporation nor the names of its contributors may be
 * used to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 * THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "area.h"

namespace MaliitKeyboard {

Area::Area()
    : m_size()
    , m_background()
    , m_background_borders()
{}

void Area::setSize(const QSize &size)
{
    m_size = size;
}

QSize Area::size() const
{
    return m_size;
}

void Area::setBackground(const QByteArray &background)
{
    m_background = background;
}

QByteArray Area::background() const
{
    return m_background;
}

void Area::setBackgroundBorders(const QMargins &borders)
{
    m_background_borders = borders;
}

QMargins Area::backgroundBorders() const
{
    return m_background_borders;
}

bool operator==(const Area &lhs,
                const Area &rhs)
{
    return (lhs.size() == rhs.size()
            && lhs.background() == rhs.background()
            && lhs.backgroundBorders() == rhs.backgroundBorders());
}

bool operator!=(const Area &lhs,
                const Area &rhs)
{
    return (not (lhs == rhs));
}

} // namespace MaliitKeyboard