/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol NSSerializerStream
- (void)copySerializationInto:(void *)arg1;
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
- (unsigned long long)writeRoomForInt:(int *)arg1;
- (unsigned long long)writeData:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
- (unsigned long long)writeInt:(unsigned long long)arg1;
@end

