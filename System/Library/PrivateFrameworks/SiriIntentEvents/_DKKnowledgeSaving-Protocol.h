//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, OS_dispatch_queue;

@protocol _DKKnowledgeSaving
- (void)saveObjects:(NSArray *)arg1 responseQueue:(OS_dispatch_queue *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (_Bool)saveObjects:(NSArray *)arg1 error:(id *)arg2;
@end
