//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject
{
    struct UsagePage_Usage_Pair _mappings[41];	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000009e4a0
- (long long)gamepadElementForUsagePage:(long long)arg1 usage:(long long)arg2;	// IMP=0x000000000009e5bd
- (void)mapUsagePage:(long long)arg1 usage:(long long)arg2 toGamepadElement:(long long)arg3;	// IMP=0x000000000009e5a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009e57b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009e4d7
- (id)init;	// IMP=0x000000000009e4a8

@end

