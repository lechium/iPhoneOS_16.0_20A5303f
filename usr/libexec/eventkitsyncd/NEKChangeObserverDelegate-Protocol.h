//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol NEKChangeObserver;

@protocol NEKChangeObserverDelegate <NSObject>
- (void)changeObserverDidObserveTruncation:(id <NEKChangeObserver>)arg1;
- (void)changeObserverDidObserveChanges:(id <NEKChangeObserver>)arg1;
@end

