#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAudioParameterType : uint8
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	Object                         = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	ObjectArray                    = 11,
	Trigger                        = 12,
	COUNT                          = 13,
	EAudioParameterType_MAX        = 14,
};

enum class EPcmBitDepthConversion : uint8
{
	SameAsSource                   = 0,
	Int16                          = 1,
	Float32                        = 2,
	EPcmBitDepthConversion_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AudioExtensions.AudioParameter
struct FAudioParameter
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloatParam;                                        // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         BoolParam;                                         // 0xC(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_272F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        IntParam;                                          // 0x10(0x4)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2730[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               ObjectParam;                                       // 0x18(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                StringParam;                                       // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                ArrayFloatParam;                                   // 0x30(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 ArrayBoolParam;                                    // 0x40(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                ArrayIntParam;                                     // 0x50(0x10)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       ArrayObjectParam;                                  // 0x60(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        ArrayStringParam;                                  // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAudioParameterType               ParamType;                                         // 0x80(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2732[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  TypeName;                                          // 0x84(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2733[0x14];                                    // Fixing Size Of Struct > TateDumper <
};

}


