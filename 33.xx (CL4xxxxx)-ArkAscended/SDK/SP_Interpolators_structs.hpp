#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x78 - 0x0)
// ScriptStruct SP_Interpolators.IIRInterpolatorVector
struct FIIRInterpolatorVector
{
public:
	float                                        InterpSpeed;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12AE[0x74];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x108 (0x108 - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorVector
struct FDoubleIIRInterpolatorVector
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12B0[0x100];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// ScriptStruct SP_Interpolators.IIRInterpolatorRotator
struct FIIRInterpolatorRotator
{
public:
	float                                        InterpSpeed;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12B1[0x74];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x108 (0x108 - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorRotator
struct FDoubleIIRInterpolatorRotator
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12B2[0x100];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SP_Interpolators.IIRInterpolatorFloat
struct FIIRInterpolatorFloat
{
public:
	float                                        InterpSpeed;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12B3[0x1C];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x4C (0x4C - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorFloat
struct FDoubleIIRInterpolatorFloat
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12B4[0x44];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorParams
struct FAccelerationInterpolatorParams
{
public:
	float                                        Acceleration;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                        MinDeceleration;                                   // 0x4(0x4)(Edit, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxSpeed;                                          // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        HoldTolerance;                                     // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorFloat
struct FAccelerationInterpolatorFloat
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12BD[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorVector
struct FAccelerationInterpolatorVector
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12C0[0x48];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorRotator
struct FAccelerationInterpolatorRotator
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12C2[0x48];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SP_Interpolators.CritDampSpringInterpolatorVector
struct FCritDampSpringInterpolatorVector
{
public:
	float                                        NaturalFrequency;                                  // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12C3[0xA4];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SP_Interpolators.CritDampSpringInterpolatorRotator
struct FCritDampSpringInterpolatorRotator
{
public:
	float                                        NaturalFrequency;                                  // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12C5[0xA4];                                    // Fixing Size Of Struct > TateDumper <
};

}


