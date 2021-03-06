//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SQLiteConnection;

@protocol SQLiteConnectionDelegate <NSObject>

@optional
- (_Bool)connectionNeedsResetForCorruption:(SQLiteConnection *)arg1;
- (_Bool)connectionNeedsResetForReopen:(SQLiteConnection *)arg1;
@end

