/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class NSString, NSTimer, UIImage, UIView, UIWebPDFView;

#pragma mark Named Structures

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

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

struct CGVector {
    double dx;
    double dy;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIKeyAndScopeToValueCache {
    unsigned int previousScope;
    unsigned int previousKey;
    struct UINibDecoderValue *previousValue;
};

struct UIKeyToKeyIDCache {
    NSString *previousKey[64];
    void *previousKeyID[64];
    _Bool previousKeyExists[64];
    long long hashHits;
    long long hashHotMisses;
    long long hashColdMisses;
};

struct UINibArchiveTableInfo {
    unsigned int count;
    unsigned int offset;
};

struct UINibDecoderHeader {
    unsigned char type[10];
    unsigned int formatVersion;
    unsigned int coderVersion;
    struct UINibArchiveTableInfo objects;
    struct UINibArchiveTableInfo keys;
    struct UINibArchiveTableInfo values;
    struct UINibArchiveTableInfo classes;
};

struct UINibDecoderObjectEntry {
    unsigned int _field1;
    unsigned int _field2;
};

struct UINibDecoderRecursiveState {
    long long objectID;
    long long nextGenericKey;
    unsigned int nextValueSearchIndex;
    _Bool replaced;
};

struct UINibDecoderValue {
    unsigned int _field1;
    unsigned int _field2;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct UIPeripheralAnimationGeometry {
    struct CGPoint outPosition;
    struct CGPoint inPosition;
    struct CGRect bounds;
    struct CGAffineTransform transform;
    double targetFrameHeightDelta;
};

struct UISharedArtworkFileHeader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[0];
};

struct UIStringIDTableBucket {
    id _field1;
    unsigned long long _field2;
    struct UIStringIDTableBucket *_field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PDFHistoryItem {
    _Bool restorePending;
    _Bool isInitialScale;
    double zoomScale;
    struct CGPoint contentOffset;
};

struct _UIWebViewportConfiguration {
    struct CGSize size;
    float initialScale;
    float minimumScale;
    float maximumScale;
    _Bool allowsUserScaling;
};

struct _WBUNetworkDataUsage {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
} CDStruct_0f015c83;

typedef struct {
    UIWebPDFView *view;
    NSTimer *timer;
} CDStruct_d58a15aa;

typedef struct {
    id _field1;
    unsigned long long _field2;
} CDStruct_856ef1b3;

typedef struct {
    id _field1;
    int _field2;
    int _field3;
} CDStruct_04eade4e;

typedef struct {
    _Bool animateContentRotation;
    _Bool preserveHeight;
    _Bool avoidFadingBottomOfContent;
    _Bool skipSnapshotOfEndState;
    double contentStretchRightEdgeInset;
    int edgeClip;
} CDStruct_010f855d;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    _Bool itemIsEnabled[25];
    char timeString[64];
    int gsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    char serviceString[100];
    char serviceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int dataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
    unsigned int quietModeInactive:1;
    unsigned int tetheringConnectionCount;
} CDStruct_0e61b686;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    unsigned int idiom:6;
    unsigned int landscape:1;
    unsigned int split:1;
    unsigned int appearance:8;
    unsigned int rendering:16;
} CDStruct_961fb75c;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
} CDStruct_afa449f9;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
} CDStruct_d83abbfb;

typedef struct {
    double w;
    double x;
    double y;
    double z;
} CDStruct_bf7dff04;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double amount;
    int unit;
} CDStruct_73524d89;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    _Bool _field5;
    _Bool _field6;
} CDStruct_3eb7d77a;

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    struct CGSize _field6;
} CDStruct_0ba2c6ed;

typedef struct {
    _Bool overrideItemIsEnabled[25];
    unsigned int overrideTimeString:1;
    unsigned int overrideGsmSignalStrengthRaw:1;
    unsigned int overrideGsmSignalStrengthBars:1;
    unsigned int overrideServiceString:1;
    unsigned int overrideServiceImages:2;
    unsigned int overrideOperatorDirectory:1;
    unsigned int overrideServiceContentType:1;
    unsigned int overrideWifiSignalStrengthRaw:1;
    unsigned int overrideWifiSignalStrengthBars:1;
    unsigned int overrideDataNetworkType:1;
    unsigned int disallowsCellularDataNetworkTypes:1;
    unsigned int overrideBatteryCapacity:1;
    unsigned int overrideBatteryState:1;
    unsigned int overrideBatteryDetailString:1;
    unsigned int overrideBluetoothBatteryCapacity:1;
    unsigned int overrideThermalColor:1;
    unsigned int overrideSlowActivity:1;
    unsigned int overrideActivityDisplayId:1;
    unsigned int overrideBluetoothConnected:1;
    unsigned int overrideDisplayRawGSMSignal:1;
    unsigned int overrideDisplayRawWifiSignal:1;
    CDStruct_0e61b686 values;
} CDStruct_9dad2be2;

typedef struct {
    CDStruct_73524d89 _field1[4];
} CDStruct_bd7e7c01;

typedef struct {
    int _field1;
    struct CGSize _field2;
} CDStruct_2f66a7ba;

typedef struct {
    CDStruct_bf7dff04 quaternion;
    CDStruct_03942939 userAcceleration;
    CDStruct_03942939 rotationRate;
    CDStruct_03942939 magneticField;
    int magneticFieldCalibrationLevel;
    _Bool doingYawCorrection;
    _Bool doingBiasEstimation;
    _Bool isInitialized;
} CDStruct_04e8b4cd;

typedef struct {
    id _field1;
    double _field2;
    double _field3;
    CDStruct_0ba2c6ed _field4;
    CDStruct_0ba2c6ed _field5;
    CDStruct_0ba2c6ed _field6;
    CDStruct_0ba2c6ed _field7;
    _Bool _field8;
} CDStruct_41b0f204;

typedef struct {
    struct CGRect left;
    struct CGRect middle;
    struct CGRect right;
} CDStruct_24b02699;

typedef struct {
    CDStruct_24b02699 top;
    CDStruct_24b02699 middle;
    CDStruct_24b02699 bottom;
} CDStruct_fa4dcde7;

// Ambiguous groups
typedef struct {
    float m_x;
    float m_y;
    float m_z;
    float m_w;
} CDStruct_23957544;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
} CDStruct_869f9c67;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

#pragma mark Named Unions

union _GLKQuaternion {
    struct {
        union _GLKVector3 v;
        float s;
    } ;
    struct {
        float x;
        float y;
        float z;
        float w;
    } ;
    float q[4];
};

union _GLKVector3 {
    CDStruct_03942939 ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};

#pragma mark Typedef'd Unions

typedef union {
    UIImage *image;
    UIView *view;
} CDUnion_b710d1cf;

typedef union {
    CDStruct_961fb75c styling;
    int intValue;
} CDUnion_2c5a7b77;

