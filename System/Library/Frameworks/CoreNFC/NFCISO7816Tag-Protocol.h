//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreNFC/NFCNDEFTag-Protocol.h>
#import <CoreNFC/NFCTag-Protocol.h>

@class NFCISO7816APDU, NSData, NSString;

@protocol NFCISO7816Tag <NFCTag, NFCNDEFTag>
@property(readonly, nonatomic) _Bool proprietaryApplicationDataCoding;
@property(readonly, copy, nonatomic) NSData *applicationData;
@property(readonly, copy, nonatomic) NSData *historicalBytes;
@property(readonly, copy, nonatomic) NSData *identifier;
@property(readonly, retain, nonatomic) NSString *initialSelectedAID;
- (void)sendCommandAPDU:(NFCISO7816APDU *)arg1 completionHandler:(void (^)(NSData *, unsigned char, unsigned char, NSError *))arg2;
@end

