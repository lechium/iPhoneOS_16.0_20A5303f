//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString;
@protocol MapsTokenDelegate;

@interface MapsToken : NSObject
{
    id <MapsTokenDelegate> _delegate;	// 8 = 0x8
    NSString *_tokenGroupName;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000b10192
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *tokenGroupName; // @synthesize tokenGroupName=_tokenGroupName;
@property(readonly, nonatomic) __weak id <MapsTokenDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x0010000000b10094
- (void)dealloc;	// IMP=0x0010000000b10033
- (MISSING_TYPE *)initWithDelegate:tokenGroupName:userInfo: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000b0ff34

@end
