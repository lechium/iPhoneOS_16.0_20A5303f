//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSScanner.h>

@interface NSScanner (NUPatternAdditions)
- (id)substringFromScanLocation;	// IMP=0x009000000006c3da
- (_Bool)scanRepeatPattern:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x009000000006baed
- (_Bool)scanPatterns:(out id *)arg1 from:(id)arg2 to:(id)arg3 delimiter:(id)arg4 error:(out id *)arg5;	// IMP=0x009000000006b029
- (_Bool)scanChoicePattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x009000000006a8b0
- (_Bool)scanGroupPattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x009000000006a137
- (_Bool)scanListPattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x00900000000699be
- (_Bool)scanTokenPattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x00900000000692c7
- (_Bool)scanPattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x0090000000068ae2
@end
