//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSError;

@protocol CNObserver <NSObject>
- (void)observerDidFailWithError:(NSError *)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
@end
