//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL;

@protocol WebBundleDownloadManagerObserver <NSObject>
- (void)webBundleHadNoChanges;
- (void)webBundleEncounteredError:(NSError *)arg1;
- (void)webBundleUpdatedWithWebBundlePath:(NSURL *)arg1;
@end
