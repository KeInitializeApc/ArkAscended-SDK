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
	float                                        InterpSpeed;                                       // 0x0(0x4)(Edit, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E6D[0x74];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x108 (0x108 - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorVector
struct FDoubleIIRInterpolatorVector
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E6E[0x100];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// ScriptStruct SP_Interpolators.IIRInterpolatorRotator
struct FIIRInterpolatorRotator
{
public:
	float                                        InterpSpeed;                                       // 0x0(0x4)(Edit, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E6F[0x74];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x108 (0x108 - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorRotator
struct FDoubleIIRInterpolatorRotator
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E71[0x100];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SP_Interpolators.IIRInterpolatorFloat
struct FIIRInterpolatorFloat
{
public:
	float                                        InterpSpeed;                                       // 0x0(0x4)(Edit, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E72[0x1C];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x4C (0x4C - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorFloat
struct FDoubleIIRInterpolatorFloat
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E74[0x44];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorParams
struct FAccelerationInterpolatorParams
{
public:
	float                                        Acceleration;                                      // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	float                                        MinDeceleration;                                   // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpeed;                                          // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        HoldTolerance;                                     // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorFloat
struct FAccelerationInterpolatorFloat
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E7A[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorVector
struct FAccelerationInterpolatorVector
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E7C[0x48];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorRotator
struct FAccelerationInterpolatorRotator
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E7E[0x48];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SP_Interpolators.CritDampSpringInterpolatorVector
struct FCritDampSpringInterpolatorVector
{
public:
	float                                        NaturalFrequency;                                  // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E7F[0xA4];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SP_Interpolators.CritDampSpringInterpolatorRotator
struct FCritDampSpringInterpolatorRotator
{
public:
	float                                        NaturalFrequency;                                  // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E81[0xA4];                                    // Fixing Size Of Struct > TateDumper <
};

}


