//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudLibraryConcurrentOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
}

- (_Bool)isFinished;	// IMP=0x0020000000065f40
- (_Bool)isExecuting;	// IMP=0x0010000000065f30
- (_Bool)isAsynchronous;	// IMP=0x0010000000065f28
- (_Bool)isConcurrent;	// IMP=0x0010000000065f20
- (void)finish;	// IMP=0x0010000000065e21
- (void)start;	// IMP=0x0010000000065d65

@end

