//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentManager/DOCRemoteAppearanceInterface-Protocol.h>

@class DOCConfiguration;
@protocol DOCHostDocumentBrowserViewControllerInterface, DOCHostTargetSelectionBrowserViewControllerProxy;

@protocol DOCServiceContextProtocol <DOCRemoteAppearanceInterface>
- (void)configureAsTargetSelectionBrowserWithHostProxy:(id <DOCHostTargetSelectionBrowserViewControllerProxy>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id <DOCServiceTargetSelectionBrowserViewControllerProxy>))arg3;
- (void)configureAsDocumentBrowserWithHostProxy:(id <DOCHostDocumentBrowserViewControllerInterface>)arg1 configuration:(DOCConfiguration *)arg2 completionBlock:(void (^)(id <DOCServiceDocumentBrowserViewControllerInterface>))arg3;
@end
