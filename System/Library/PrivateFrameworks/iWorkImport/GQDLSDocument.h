//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSStylesheet;

@interface GQDLSDocument
{
    GQDSStylesheet *mStylesheet;	// 80 = 0x50
}

+ (struct _xmlNs *)appNamespace;	// IMP=0x006000000000b537
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg1;	// IMP=0x000000000000b681
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileUrl:(struct __CFURL *)arg3;	// IMP=0x000000000000b5eb
- (void)setStylesheet:(id)arg1;	// IMP=0x000000000000b5b2
- (id)stylesheet;	// IMP=0x000000000000b5a1
- (void)dealloc;	// IMP=0x000000000000b547
- (struct __CFString *)createUpgradedAppBundleResourcePath:(struct __CFString *)arg1;	// IMP=0x000000000000b6ad

@end

