//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFHomeAnnouncementObserver, AFHomeAnnouncementSnapshot;

@protocol AFHomeAnnouncementListening <NSObject>
- (void)homeAnnouncementObserver:(AFHomeAnnouncementObserver *)arg1 snapshotDidUpdateFrom:(AFHomeAnnouncementSnapshot *)arg2 to:(AFHomeAnnouncementSnapshot *)arg3;
- (void)homeAnnouncementObserver:(AFHomeAnnouncementObserver *)arg1 stateDidUpdateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
@end
