//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _CPLPrequeliteScopeIsEqual : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x002000000002b430
- (void).cxx_destruct;	// IMP=0x002000000002b541
- (id)bindValuesToKeepAlive;	// IMP=0x001000000002b533
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x001000000002b517
@property(readonly, nonatomic) NSData *sql;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000002b493

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

