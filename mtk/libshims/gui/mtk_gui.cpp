#include <stdlib.h>
#include <ui/GraphicBufferMapper.h>
#include <ui/Rect.h>

extern "C" {
    void _ZN7android11IDumpTunnel11asInterfaceERKNS_2spINS_7IBinderEEE(){}
}

extern "C" {
    void _ZN7android13GraphicBufferC1Ejjij(uint32_t inWidth, uint32_t inHeight, int32_t inFormat, uint32_t inUsage);
}

extern "C" {
    void _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(buffer_handle_t, uint32_t, const android::Rect&, void**);

    void _ZN7android19GraphicBufferMapper4lockEPK13native_handleiRKNS_4RectEPPv(buffer_handle_t handle, int usage, const android::Rect& bounds, void** vaddr) {
        _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(handle, static_cast<uint32_t>(usage), bounds, vaddr);
}
    }

/*
extern "C" {
 void _ZN7android11IDumpTunnel11asInterfaceERKNS_2spINS_7IBinderEEE(const android::sp<android::IBinder>&) {}
}
*/
