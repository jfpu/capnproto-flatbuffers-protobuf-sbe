// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_SAVESCHEMA_COMPANYNAMESPACEWHATEVER_H_
#define FLATBUFFERS_GENERATED_SAVESCHEMA_COMPANYNAMESPACEWHATEVER_H_

#include "flatbuffers/flatbuffers.h"


namespace CompanyNamespaceWhatever {

struct Vec3;
struct GameDataWhatever;
struct Sword;
struct Gun;

enum Color {
  Color_Red = 1,
  Color_Green = 2,
  Color_Blue = 3
};

inline const char **EnumNamesColor() {
  static const char *names[] = { "Red", "Green", "Blue", nullptr };
  return names;
}

inline const char *EnumNameColor(Color e) { return EnumNamesColor()[e - Color_Red]; }

enum WeaponClassesOrWhatever {
  WeaponClassesOrWhatever_NONE = 0,
  WeaponClassesOrWhatever_Sword = 1,
  WeaponClassesOrWhatever_Gun = 2
};

inline const char **EnumNamesWeaponClassesOrWhatever() {
  static const char *names[] = { "NONE", "Sword", "Gun", nullptr };
  return names;
}

inline const char *EnumNameWeaponClassesOrWhatever(WeaponClassesOrWhatever e) { return EnumNamesWeaponClassesOrWhatever()[e]; }

inline bool VerifyWeaponClassesOrWhatever(flatbuffers::Verifier &verifier, const void *union_obj, WeaponClassesOrWhatever type);

MANUALLY_ALIGNED_STRUCT(4) Vec3 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vec3(float x, float y, float z)
    : x_(flatbuffers::EndianScalar(x)), y_(flatbuffers::EndianScalar(y)), z_(flatbuffers::EndianScalar(z)) { }

  float x() const { return flatbuffers::EndianScalar(x_); }
  float y() const { return flatbuffers::EndianScalar(y_); }
  float z() const { return flatbuffers::EndianScalar(z_); }
};
STRUCT_END(Vec3, 12);

struct GameDataWhatever FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const Vec3 *pos() const { return GetStruct<const Vec3 *>(4); }
  int16_t mana() const { return GetField<int16_t>(6, 150); }
  int16_t hp() const { return GetField<int16_t>(8, 100); }
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(10); }
  const flatbuffers::Vector<uint8_t> *inventory() const { return GetPointer<const flatbuffers::Vector<uint8_t> *>(12); }
  Color color() const { return static_cast<Color>(GetField<int8_t>(14, 3)); }
  WeaponClassesOrWhatever weapon_type() const { return static_cast<WeaponClassesOrWhatever>(GetField<uint8_t>(16, 0)); }
  const void *weapon() const { return GetPointer<const void *>(18); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Vec3>(verifier, 4 /* pos */) &&
           VerifyField<int16_t>(verifier, 6 /* mana */) &&
           VerifyField<int16_t>(verifier, 8 /* hp */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* inventory */) &&
           verifier.Verify(inventory()) &&
           VerifyField<int8_t>(verifier, 14 /* color */) &&
           VerifyField<uint8_t>(verifier, 16 /* weapon_type */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 18 /* weapon */) &&
           VerifyWeaponClassesOrWhatever(verifier, weapon(), weapon_type()) &&
           verifier.EndTable();
  }
};

struct GameDataWhateverBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pos(const Vec3 *pos) { fbb_.AddStruct(4, pos); }
  void add_mana(int16_t mana) { fbb_.AddElement<int16_t>(6, mana, 150); }
  void add_hp(int16_t hp) { fbb_.AddElement<int16_t>(8, hp, 100); }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(10, name); }
  void add_inventory(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> inventory) { fbb_.AddOffset(12, inventory); }
  void add_color(Color color) { fbb_.AddElement<int8_t>(14, static_cast<int8_t>(color), 3); }
  void add_weapon_type(WeaponClassesOrWhatever weapon_type) { fbb_.AddElement<uint8_t>(16, static_cast<uint8_t>(weapon_type), 0); }
  void add_weapon(flatbuffers::Offset<void> weapon) { fbb_.AddOffset(18, weapon); }
  GameDataWhateverBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  GameDataWhateverBuilder &operator=(const GameDataWhateverBuilder &);
  flatbuffers::Offset<GameDataWhatever> Finish() {
    auto o = flatbuffers::Offset<GameDataWhatever>(fbb_.EndTable(start_, 8));
    return o;
  }
};

inline flatbuffers::Offset<GameDataWhatever> CreateGameDataWhatever(flatbuffers::FlatBufferBuilder &_fbb,
   const Vec3 *pos = 0,
   int16_t mana = 150,
   int16_t hp = 100,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   flatbuffers::Offset<flatbuffers::Vector<uint8_t>> inventory = 0,
   Color color = Color_Blue,
   WeaponClassesOrWhatever weapon_type = WeaponClassesOrWhatever_NONE,
   flatbuffers::Offset<void> weapon = 0) {
  GameDataWhateverBuilder builder_(_fbb);
  builder_.add_weapon(weapon);
  builder_.add_inventory(inventory);
  builder_.add_name(name);
  builder_.add_pos(pos);
  builder_.add_hp(hp);
  builder_.add_mana(mana);
  builder_.add_weapon_type(weapon_type);
  builder_.add_color(color);
  return builder_.Finish();
}

struct Sword FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  int32_t damage() const { return GetField<int32_t>(4, 10); }
  int16_t distance() const { return GetField<int16_t>(6, 5); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, 4 /* damage */) &&
           VerifyField<int16_t>(verifier, 6 /* distance */) &&
           verifier.EndTable();
  }
};

struct SwordBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_damage(int32_t damage) { fbb_.AddElement<int32_t>(4, damage, 10); }
  void add_distance(int16_t distance) { fbb_.AddElement<int16_t>(6, distance, 5); }
  SwordBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  SwordBuilder &operator=(const SwordBuilder &);
  flatbuffers::Offset<Sword> Finish() {
    auto o = flatbuffers::Offset<Sword>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<Sword> CreateSword(flatbuffers::FlatBufferBuilder &_fbb,
   int32_t damage = 10,
   int16_t distance = 5) {
  SwordBuilder builder_(_fbb);
  builder_.add_damage(damage);
  builder_.add_distance(distance);
  return builder_.Finish();
}

struct Gun FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  int32_t damage() const { return GetField<int32_t>(4, 500); }
  int16_t reloadspeed() const { return GetField<int16_t>(6, 2); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, 4 /* damage */) &&
           VerifyField<int16_t>(verifier, 6 /* reloadspeed */) &&
           verifier.EndTable();
  }
};

struct GunBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_damage(int32_t damage) { fbb_.AddElement<int32_t>(4, damage, 500); }
  void add_reloadspeed(int16_t reloadspeed) { fbb_.AddElement<int16_t>(6, reloadspeed, 2); }
  GunBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  GunBuilder &operator=(const GunBuilder &);
  flatbuffers::Offset<Gun> Finish() {
    auto o = flatbuffers::Offset<Gun>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<Gun> CreateGun(flatbuffers::FlatBufferBuilder &_fbb,
   int32_t damage = 500,
   int16_t reloadspeed = 2) {
  GunBuilder builder_(_fbb);
  builder_.add_damage(damage);
  builder_.add_reloadspeed(reloadspeed);
  return builder_.Finish();
}

inline bool VerifyWeaponClassesOrWhatever(flatbuffers::Verifier &verifier, const void *union_obj, WeaponClassesOrWhatever type) {
  switch (type) {
    case WeaponClassesOrWhatever_NONE: return true;
    case WeaponClassesOrWhatever_Sword: return verifier.VerifyTable(reinterpret_cast<const Sword *>(union_obj));
    case WeaponClassesOrWhatever_Gun: return verifier.VerifyTable(reinterpret_cast<const Gun *>(union_obj));
    default: return false;
  }
}

inline const GameDataWhatever *GetGameDataWhatever(const void *buf) { return flatbuffers::GetRoot<GameDataWhatever>(buf); }

inline bool VerifyGameDataWhateverBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<GameDataWhatever>(); }

inline const char *GameDataWhateverIdentifier() { return "WHAT"; }

inline bool GameDataWhateverBufferHasIdentifier(const void *buf) { return flatbuffers::BufferHasIdentifier(buf, GameDataWhateverIdentifier()); }

inline void FinishGameDataWhateverBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<GameDataWhatever> root) { fbb.Finish(root, GameDataWhateverIdentifier()); }

}  // namespace CompanyNamespaceWhatever

#endif  // FLATBUFFERS_GENERATED_SAVESCHEMA_COMPANYNAMESPACEWHATEVER_H_
