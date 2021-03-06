//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DAMailMessage;

@protocol DAMailboxStreamingContentConsumer
- (void)didEndStreamingForMailMessage:(DAMailMessage *)arg1;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(DAMailMessage *)arg4;
- (_Bool)shouldBeginStreamingForMailMessage:(DAMailMessage *)arg1 format:(int)arg2;
@end

