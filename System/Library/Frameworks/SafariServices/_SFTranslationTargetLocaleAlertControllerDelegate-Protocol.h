//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString, _SFTranslationTargetLocaleAlertController;

@protocol _SFTranslationTargetLocaleAlertControllerDelegate <NSObject>

@optional
- (_Bool)translationAlertControllerShouldDismissAfterSelection:(_SFTranslationTargetLocaleAlertController *)arg1;
- (void)translationAlertController:(_SFTranslationTargetLocaleAlertController *)arg1 validateTargetLocale:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)translationAlertController:(_SFTranslationTargetLocaleAlertController *)arg1 didSelectLocale:(NSString *)arg2;
@end
