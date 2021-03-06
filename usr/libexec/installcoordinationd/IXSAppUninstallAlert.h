//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface IXSAppUninstallAlert
{
    _Bool _appManagedByManagedSettings;	// 8 = 0x8
    NSArray *_fontFamilies;	// 16 = 0x10
    struct __CFBundle *_appStringsBundle;	// 24 = 0x18
    NSString *_appStringsTableName;	// 32 = 0x20
}

+ (id)_loadHBMCloudSyncUtilityClass;	// IMP=0x004000000002bc36
- (void).cxx_destruct;	// IMP=0x002000000002ca0b
@property(readonly, nonatomic) NSString *appStringsTableName; // @synthesize appStringsTableName=_appStringsTableName;
@property(readonly, nonatomic) struct __CFBundle *appStringsBundle; // @synthesize appStringsBundle=_appStringsBundle;
@property(readonly, nonatomic) _Bool appManagedByManagedSettings; // @synthesize appManagedByManagedSettings=_appManagedByManagedSettings;
@property(readonly, nonatomic) NSArray *fontFamilies; // @synthesize fontFamilies=_fontFamilies;
- (void)dealloc;	// IMP=0x001000000002c976
- (void)otherButtonActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c819
- (id)optionalButtonForNotRemovableAppActionURL;	// IMP=0x001000000002c689
- (id)optionalButtonForNotRemovableAppLabel;	// IMP=0x001000000002c580
- (id)otherButtonLabel;	// IMP=0x001000000002c503
- (id)cancelButtonLabel;	// IMP=0x001000000002c4e3
- (id)defaultButtonLabel;	// IMP=0x001000000002c4c3
- (id)message;	// IMP=0x001000000002c059
- (id)title;	// IMP=0x001000000002bf50
- (id)appInstalledFonts;	// IMP=0x001000000002bee9
- (id)localizedStringForKey:(id)arg1 withFormatHint:(id)arg2;	// IMP=0x001000000002bdae
@property(readonly, nonatomic) long long installedFontCount; // @dynamic installedFontCount;
@property(readonly, nonatomic) _Bool needsShowFontsButton; // @dynamic needsShowFontsButton;
@property(readonly, nonatomic) _Bool appHasInstalledFonts; // @dynamic appHasInstalledFonts;
@property(readonly, nonatomic) _Bool deviceHasOneHomeEnabled; // @dynamic deviceHasOneHomeEnabled;
@property(readonly, nonatomic) _Bool appHasiCloudDataOrDocuments; // @dynamic appHasiCloudDataOrDocuments;
- (id)initWithAppRecord:(id)arg1 bundleIdentifier:(id)arg2 isRemovable:(_Bool)arg3 isManagedByManagedSettings:(_Bool)arg4;	// IMP=0x001000000002b6da

@end

