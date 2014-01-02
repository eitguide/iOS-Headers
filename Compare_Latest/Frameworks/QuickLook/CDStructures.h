/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class RTFNSFont, RTFNSMutableParagraphStyle;

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct RTFCPZEndOfCentralDirectory {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct RTFColor;

struct RTFFont;

struct RTFStyle;

struct _NSAttributeInfo {
    unsigned int toUniCharEncoding;
    unsigned int codePageEncoding;
    RTFNSFont *font;
    double fontSize;
    double kern;
    RTFNSMutableParagraphStyle *paraStyle;
    unsigned int bold:1;
    unsigned int italic:1;
    unsigned int fontIsValid:1;
    unsigned int paraStyleIsValid:1;
    unsigned int kernIsValid:1;
    unsigned int attributesSameAsBefore:1;
    unsigned int multiByteEncoding:1;
    unsigned int unicodeAlternativeLength:3;
    unsigned int tabStopType:4;
    unsigned int curAttributesNeedsCopying:1;
    unsigned int paraStyleNeedsCopying:1;
    unsigned int hasWritingDirectionAttribute:1;
    unsigned int :16;
};

struct _NSRTFPriv {
    void *reader;
    char *rtfInput;
    unsigned long long rtfInputLength;
    unsigned long long rtfInputLocation;
    unsigned long long rtfHeaderEndLocation;
    int pushedChar;
    int pushedClass;
    int pushedMajor;
    int pushedMinor;
    int pushedParam;
    char pushedTextBuf[1024];
    int prevChar;
    int bumpLine;
    struct RTFFont *fontList;
    struct RTFColor *colorList;
    struct RTFStyle *styleList;
    char *inputName;
    char *outputName;
    void *ccb[5];
    void *readHook;
    void *msgProc;
    void *panicProc;
    char textBuf[1024];
    int textLen;
    int tokenClass;
    int major;
    int minor;
    int param;
    long long lineNum;
    long long linePos;
    int groupState;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct internal_state;

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
} CDStruct_4e53fc95;

typedef struct {
    long long version;
    void *retain;
    void *release;
    void *copyDescription;
    void *equal;
} CDStruct_b3b3fc87;

typedef struct {
    long long pid;
    struct {
        unsigned int val[8];
    } audit_token;
    struct CGRect contentFrame;
} CDStruct_0109ef53;

