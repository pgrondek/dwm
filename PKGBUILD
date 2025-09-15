pkgname="dwm"
pkgrel="1"
pkgver="6.4.0"
arch=("x86_64")

depends=(
    "libx11" 
    "libxft"
    "libxinerama"
    "libxcb"
    "yajl"
)

source=(
    "config.h"
    "config.mk"
    "dwm.desktop"
    "drw.c"
    "drw.h"
    "dwm.c"
    "dwm.png"
    "dwm.1"
    "dwm.desktop"
    "dwm-msg.c"
    "ipc.c"
    "ipc.h"
    "IPCClient.c"
    "IPCClient.h"
    "start-dwm"
    "transient.c"
    "util.c"
    "util.h"
    "yajl_dumps.c"
    "yajl_dumps.h"
    "Makefile"
)

sha256sums=(
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
    SKIP
)

build() {
    make
}

package() {
    make DESTDIR="$pkgdir" PREFIX=/usr install
}
