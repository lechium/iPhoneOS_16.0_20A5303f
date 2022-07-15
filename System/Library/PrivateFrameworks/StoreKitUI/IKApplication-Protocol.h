//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class IKAppDocument, IKViewElementRegistry, NSDictionary, NSString, NSURL;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring;

@protocol IKApplication <NSObject>
- (id <IKAppUserDefaultsStoring>)userDefaultsStorage;
- (id <IKAppDataStoring>)vendorStorage;
- (id <IKAppDataStoring>)localStorage;
- (NSString *)vendorIdentifier;
- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (_Bool)shouldIgnoreJSValidation;

@optional
- (NSDictionary *)appTraitCollection;
- (_Bool)appUsesDefaultStyleSheets;
- (IKViewElementRegistry *)viewElementRegistry;
- (IKAppDocument *)activeDocument;
- (NSDictionary *)appLaunchParams;
- (NSString *)appLaunchParamsResolvedBootURLKey;
- (_Bool)appIsPrivileged;
- (_Bool)appIsTrusted;
- (_Bool)shouldAllowRemoteInspection;
- (NSURL *)appLocalJSURL;
- (NSURL *)appJSCachePath;
- (NSURL *)offlineJSURL;
- (NSString *)bagBootURLKey;
@end
