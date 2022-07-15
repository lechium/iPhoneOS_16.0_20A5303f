//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CARSettingsCellSpecifier, NSString, UIColor;

@protocol CARSettingsCellSpecifierObserver <NSObject>
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateValue:(id)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateTitleColor:(UIColor *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateEnabled:(_Bool)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateSelectionStyle:(long long)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateDetail:(NSString *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateTitle:(NSString *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateAccessoryType:(long long)arg2;
@end
