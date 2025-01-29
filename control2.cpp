#include "pxt.h"

namespace control {
    /**
    * Gets the source of the last event executed on the bus
    */
    //% blockId=control_event_source block="event source"
    //% help=control/event-source
    //% weight=18 shim=control::eventSource
    int eventSource() {
        return pxt::lastEvent.source;
    }
}
