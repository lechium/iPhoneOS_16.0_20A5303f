//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKEditCommand : NSObject
{
    struct RefPtr<WebKit::WebEditCommandProxy, WTF::RawPtrTraits<WebKit::WebEditCommandProxy>, WTF::DefaultRefDerefTraits<WebKit::WebEditCommandProxy>> _command;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000036ef6c
- (void).cxx_destruct;	// IMP=0x000000000036ef4b
- (void *)command;	// IMP=0x000000000036ef41
- (id)initWithWebEditCommandProxy:(void *)arg1;	// IMP=0x000000000036eede

@end
