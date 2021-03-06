//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface JSWrapperMap : NSObject
{
    struct RetainPtr<NSMutableDictionary> m_classMap;	// 8 = 0x8
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject>, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> m_cachedJSWrappers;	// 16 = 0x10
    struct RetainPtr<NSMapTable> m_cachedObjCWrappers;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x000000000049c0f0
- (void).cxx_destruct;	// IMP=0x000000000049c030
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;	// IMP=0x000000000049bf90
- (id)jsWrapperForObject:(id)arg1 inContext:(id)arg2;	// IMP=0x000000000049bb90
- (id)classInfoForClass:(Class)arg1;	// IMP=0x000000000049b9e0
- (id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg1;	// IMP=0x000000000049b850

@end

