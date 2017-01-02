/*
 *  QOffice: Office UI framework for Qt
 *  Copyright (C) 2016-2017 Nicolas Kogler
 *
 *  This file is part of QOffice.
 *
 *  QOffice is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  QOffice is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with QOffice. If not, see <http://www.gnu.org/licenses/>.
 *
 */


// QOffice headers
#include <QOffice/Design/OfficePalette.hpp>


QOFFICE_USING_NAMESPACE


const QColor&
OfficePalette::get(PaletteRole role)
{
    if (role >= PaletteRole::Max)
        throw "placeholder";

    return g_Colors[role];
}


// Specifies the predefined palette entries.
std::vector<QColor> OfficePalette::g_Colors =
{
    QColor(0xf1f1f1),
    QColor(0x666666),
    QColor(0x989898),
    QColor(0xbebebe),
    QColor(0xffffff),
    QColor(0xe1e1e1),
    QColor(0x5c5c5c),
    QColor(0x336699),
    QColor(0xd5d5d5)
};
