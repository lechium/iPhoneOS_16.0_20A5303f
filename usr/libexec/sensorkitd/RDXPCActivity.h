//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface RDXPCActivity : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSObject<OS_xpc_object> *_criteria;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcActivity;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0040000000028200
- (id)description;	// IMP=0x00200000000292b0
- (void)markCompleted;	// IMP=0x00100000000290f0
- (_Bool)deferIfNeeded;	// IMP=0x0010000000028f10
- (void)dealloc;	// IMP=0x0010000000028ea0
- (id)initWithName:(id)arg1 criteria:(id)arg2;	// IMP=0x0010000000028e30

@end
