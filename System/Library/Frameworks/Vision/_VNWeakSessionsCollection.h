//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _VNWeakSessionsCollection : NSObject
{
    NSMutableArray *_weakSessionWrappers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000090224
- (id)description;	// IMP=0x000000000009018a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000090106
- (unsigned long long)hash;	// IMP=0x00000000000900f0
- (id)allSessionsDroppingWeakZeroedObjects:(_Bool)arg1;	// IMP=0x0000000000090047
- (void)addSession:(id)arg1 droppingWeakZeroedObjects:(_Bool)arg2;	// IMP=0x000000000008ff01
- (id)init;	// IMP=0x000000000008fe8d

@end

