//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class APSConnectionServer, APSURLToken, NSData;
@protocol APSTokenInfo;

@protocol APSConnectionServerTokenDelegate <NSObject>
- (APSURLToken *)connection:(APSConnectionServer *)arg1 createURLTokenForToken:(NSData *)arg2;
- (void)connection:(APSConnectionServer *)arg1 didInvalidateTokenForInfo:(id <APSTokenInfo>)arg2;
- (void)connection:(APSConnectionServer *)arg1 didRequestCurrentTokenForInfo:(id <APSTokenInfo>)arg2;
- (void)connection:(APSConnectionServer *)arg1 didRequestTokenForInfo:(id <APSTokenInfo>)arg2;
@end
