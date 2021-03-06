//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSError, VSAppDocumentController, VSViewModel;

@protocol VSAppDocumentControllerDelegate <NSObject>

@optional
- (void)appDocumentController:(VSAppDocumentController *)arg1 didFailToUpdateViewModelWithError:(NSError *)arg2;
- (void)appDocumentController:(VSAppDocumentController *)arg1 didUpdateViewModel:(VSViewModel *)arg2;
@end

