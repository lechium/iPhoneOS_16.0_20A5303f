//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKWebViewContentProviderRegistry : NSObject
{
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits> _contentProviderForMIMEType;	// 8 = 0x8
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> _pages;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000374843
- (void).cxx_destruct;	// IMP=0x00000000003747bb
- (Vector_7aeb0c1e)_mimeTypesWithCustomContentProviders;	// IMP=0x0000000000374693
- (Class)providerForMIMEType:(const void *)arg1;	// IMP=0x00000000003745ae
- (void)registerProvider:(Class)arg1 forMIMEType:(const void *)arg2;	// IMP=0x0000000000374382
- (void)removePage:(void *)arg1;	// IMP=0x0000000000374308
- (void)addPage:(void *)arg1;	// IMP=0x00000000003741ab
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000373f2e

@end

