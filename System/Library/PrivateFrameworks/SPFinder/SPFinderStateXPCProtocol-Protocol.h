//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPFinder/NSObject-Protocol.h>

@protocol SPFinderStateXPCProtocol <NSObject>
- (void)setActiveCache:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)stateInfoWithCompletion:(void (^)(SPFinderStateInfo *, NSError *))arg1;
- (void)disableFinderModeWithCompletion:(void (^)(NSError *))arg1;
- (void)enableFinderModeWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchFinderState:(void (^)(_Bool, NSError *))arg1;
- (void)start;
@end
