//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/NSObject-Protocol.h>

@class SFCard, SRUIFCardLoader;

@protocol SRUIFCardLoaderDelegate <NSObject>
- (_Bool)cardLoader:(SRUIFCardLoader *)arg1 loadCard:(SFCard *)arg2 withCompletionHandler:(void (^)(SFCard *, NSError *))arg3;
- (_Bool)cardLoader:(SRUIFCardLoader *)arg1 shouldLoadCard:(SFCard *)arg2;
@end

