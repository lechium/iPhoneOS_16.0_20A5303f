//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface MADProcessingTask : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    CDUnknownBlockType _cancelBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000301c3
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)init;	// IMP=0x001000000003013a

@end
