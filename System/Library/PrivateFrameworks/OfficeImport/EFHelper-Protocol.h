//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSObject-Protocol.h>

@class EDTable, NSString;

@protocol EFHelper <NSObject>
- (int)columnNumber;
- (int)rowNumber;
- (int)resolveFunctionName:(NSString *)arg1;
- (_Bool)isCurrentSheet:(NSString *)arg1;
- (unsigned long long)resolveTableColumn:(EDTable *)arg1 columnName:(NSString *)arg2;
- (unsigned long long)resolveTableToSheetId:(NSString *)arg1;
- (EDTable *)resolveTable:(NSString *)arg1;
- (unsigned long long)resolveFile:(NSString *)arg1;
- (unsigned long long)resolveFirstSheet:(NSString *)arg1 lastSheet:(NSString *)arg2;
- (unsigned long long)resolveSheet:(NSString *)arg1;
- (unsigned long long)resolveName:(NSString *)arg1;
@end

