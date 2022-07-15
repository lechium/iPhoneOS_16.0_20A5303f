//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface SHLTaskPreconditionResult : NSObject
{
    _Bool _satisfied;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)resultWithError:(id)arg1;	// IMP=0x004000000003026c
+ (id)failedResult;	// IMP=0x001000000003023f
+ (id)fulfilledResult;	// IMP=0x001000000003020f
- (void).cxx_destruct;	// IMP=0x0020000000030344
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic, getter=isSatisfied) _Bool satisfied; // @synthesize satisfied=_satisfied;
- (id)initWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000000302bb

@end
