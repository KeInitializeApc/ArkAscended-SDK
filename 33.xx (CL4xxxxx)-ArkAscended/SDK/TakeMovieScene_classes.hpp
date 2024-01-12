#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x620 (0x710 - 0xF0)
// Class TakeMovieScene.MovieSceneTakeSection
class UMovieSceneTakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel             HoursCurve;                                        // 0xF0(0x100)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneIntegerChannel             MinutesCurve;                                      // 0x1F0(0x100)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneIntegerChannel             SecondsCurve;                                      // 0x2F0(0x100)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneIntegerChannel             FramesCurve;                                       // 0x3F0(0x100)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               SubFramesCurve;                                    // 0x4F0(0x110)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneStringChannel              Slate;                                             // 0x600(0x110)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UMovieSceneTakeSection* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class TakeMovieScene.MovieSceneTakeSettings
class UMovieSceneTakeSettings : public UObject
{
public:
	class FString                                HoursName;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                MinutesName;                                       // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                SecondsName;                                       // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                FramesName;                                        // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                SubFramesName;                                     // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                SlateName;                                         // 0x78(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneTakeSettings* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class TakeMovieScene.MovieSceneTakeTrack
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneTakeTrack* GetDefaultObj();

};

}


